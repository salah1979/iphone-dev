/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@interface UIBox : UIView
{
    int _corners;
    UIView *_contentView;
    struct CGColor *_backgroundColor;
}

- (id)contentView;	// IMP=0x323eeea8
- (void)dealloc;	// IMP=0x323eeb90
- (void)drawRect:(struct CGRect)fp8;	// IMP=0x323eec68
- (void)placeContentLayer;	// IMP=0x323eed7c
- (void)setBackgroundColor:(struct CGColor *)fp8;	// IMP=0x323eebe4
- (void)setContentView:(id)fp8;	// IMP=0x323eee48
- (void)setRoundedCorners:(int)fp8;	// IMP=0x323eec3c

@end

