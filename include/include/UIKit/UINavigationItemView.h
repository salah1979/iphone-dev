/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UINavigationItem;

@interface UINavigationItemView : UIView
{
    struct __GSFont *_font;
    UINavigationItem *_item;
    float _titleWidth;
}

- (struct __GSFont *)_defaultFont;	// IMP=0x323d60fc
- (void)_resetTitleWidth;	// IMP=0x323d63d0
- (float)_titleWidth;	// IMP=0x323d63f4
- (void)drawRect:(struct CGRect)fp8;	// IMP=0x323d6338
- (void)drawText:(id)fp8 inRect:(struct CGRect)fp12;	// IMP=0x323d6124
- (struct __GSFont *)font;	// IMP=0x323d64c8
- (id)initWithNavigationItem:(id)fp8;	// IMP=0x323d6030
- (id)navigationItem;	// IMP=0x323d60f4
- (void)setFont:(struct __GSFont *)fp8;	// IMP=0x323d6498
- (void)setFrame:(struct CGRect)fp8;	// IMP=0x323d623c
- (id)title;	// IMP=0x323d6478

@end

