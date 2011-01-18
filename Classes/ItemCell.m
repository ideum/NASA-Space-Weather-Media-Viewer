//
// Copyright 2009-2010 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import "ItemCell.h"
#import "Item.h"

// UI
#import "Three20UI/TTImageView.h"
#import "Three20UI/TTTableMessageItem.h"
#import "Three20UI/UIViewAdditions.h"
#import "Three20Style/UIFontAdditions.h"

// Style
#import "Three20Style/TTGlobalStyle.h"
#import "Three20Style/TTDefaultStyleSheet.h"

// Core
#import "Three20Core/TTCorePreprocessorMacros.h"
#import "Three20Core/NSDateAdditions.h"

static const NSInteger  kMessageTextLineCount       = 2;
static const CGFloat    kDefaultMessageImageWidth   = 57;
static const CGFloat    kDefaultMessageImageHeight  = 57;


///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
@implementation ItemCell


///////////////////////////////////////////////////////////////////////////////////////////////////
- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString*)identifier {
  if (self = [super initWithStyle:UITableViewCellStyleValue2 reuseIdentifier:identifier]) {
    self.detailTextLabel.font = TTSTYLEVAR(font);
    self.detailTextLabel.textColor = TTSTYLEVAR(tableSubTextColor);
    self.detailTextLabel.highlightedTextColor = TTSTYLEVAR(highlightedTextColor);
    self.detailTextLabel.textAlignment = UITextAlignmentLeft;
    self.detailTextLabel.contentMode = UIViewContentModeTop;
    self.detailTextLabel.lineBreakMode = UILineBreakModeTailTruncation;
    self.detailTextLabel.numberOfLines = kMessageTextLineCount;
    self.detailTextLabel.contentMode = UIViewContentModeLeft;
  }

  return self;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)dealloc {
  TT_RELEASE_SAFELY(_titleLabel);
  TT_RELEASE_SAFELY(_imageView2);

  [super dealloc];
}


///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
#pragma mark TTTableViewCell class public


///////////////////////////////////////////////////////////////////////////////////////////////////
+ (CGFloat)tableView:(UITableView*)tableView rowHeightForObject:(id)object {
  CGFloat margin = 10;
  CGFloat height = margin;

  CGFloat maxWidth = tableView.frame.size.width - ((3 *margin )+ kDefaultMessageImageHeight);

  CGSize maxSize = CGSizeMake(maxWidth, maxWidth);
  CGSize titleSize = [((Item *) object).title sizeWithFont:TTSTYLEVAR(tableFont) constrainedToSize:maxSize lineBreakMode:UILineBreakModeWordWrap];
  height += titleSize.height;

  CGFloat textHeight = TTSTYLEVAR(font).ttLineHeight * 2;
  height += textHeight;

  return height+ 20;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
#pragma mark UIView


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)prepareForReuse {
  [super prepareForReuse];
  [_imageView2 unsetImage];
  _titleLabel.text = nil;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)layoutSubviews {
  [super layoutSubviews];

  CGFloat left = 0;
  CGFloat margin = 10;

  if (_imageView2) {
    _imageView2.frame = CGRectMake(margin, margin, kDefaultMessageImageWidth, kDefaultMessageImageHeight);
    left += margin + kDefaultMessageImageHeight + margin;
  } else {
    left = margin;
  }

  CGFloat width = self.contentView.width - left;
  CGFloat top = margin;

  if (_titleLabel.text.length) {
    CGSize maxSize = CGSizeMake(width, width);
    CGSize realSize = [_titleLabel.text sizeWithFont:TTSTYLEVAR(tableFont) constrainedToSize:maxSize lineBreakMode:UILineBreakModeWordWrap];
    CGFloat lineCount = realSize.height / TTSTYLEVAR(font).ttLineHeight;
    _titleLabel.numberOfLines = lineCount;

    _titleLabel.frame = CGRectMake(left, top, width, realSize.height);
    top += _titleLabel.height;
  } else {
    _titleLabel.frame = CGRectZero;
  }

  if (self.detailTextLabel.text.length) {
    CGFloat textHeight = self.detailTextLabel.font.ttLineHeight * kMessageTextLineCount;
    self.detailTextLabel.frame = CGRectMake(left, top, width, textHeight);
  } else {
    self.detailTextLabel.frame = CGRectZero;
  }
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)didMoveToSuperview {
  [super didMoveToSuperview];

  if (self.superview) {
    _imageView2.backgroundColor = self.backgroundColor;
    _titleLabel.backgroundColor = self.backgroundColor;
  }
}


///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
#pragma mark TTTableViewCell


///////////////////////////////////////////////////////////////////////////////////////////////////
- (void)setObject:(id)object {
  if (_item != object) {
    [super setObject:object];

    TTTableMessageItem* item = object;
    if (item.title.length) {
      self.titleLabel.text = item.title;
    }
    if (item.text.length) {
      self.detailTextLabel.text = item.text;
    }
    if (item.imageURL) {
      self.imageView2.urlPath = item.imageURL;
    }
  }
}


///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
#pragma mark -
#pragma mark Public


///////////////////////////////////////////////////////////////////////////////////////////////////
- (UILabel*)titleLabel {
  if (!_titleLabel) {
    _titleLabel = [[UILabel alloc] init];
    _titleLabel.textColor = [UIColor blackColor];
    _titleLabel.highlightedTextColor = [UIColor whiteColor];
    _titleLabel.font = TTSTYLEVAR(tableFont);
    _titleLabel.contentMode = UIViewContentModeLeft;
    _titleLabel.lineBreakMode = UILineBreakModeTailTruncation;
    _titleLabel.numberOfLines = kMessageTextLineCount;
    [_titleLabel sizeToFit]; 
    [self.contentView addSubview:_titleLabel];
  }
  return _titleLabel;
}


///////////////////////////////////////////////////////////////////////////////////////////////////
- (TTImageView*)imageView2 {
  if (!_imageView2) {
    _imageView2 = [[TTImageView alloc] init];
    //    _imageView2.defaultImage = TTSTYLEVAR(personImageSmall);
    //    _imageView2.style = TTSTYLE(threadActorIcon);
    [self.contentView addSubview:_imageView2];
  }
  return _imageView2;
}


@end
