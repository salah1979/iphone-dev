/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface UIGradientBar : UIView
{
    UIImageView *_topShineView;
    UIImageView *_gradientFillView;
    UIImageView *_bottomLineView;
}

- (void)_tile;	// IMP=0x324a9cfc
- (void)dealloc;	// IMP=0x324a9b24
- (id)hitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;	// IMP=0x324a9c8c
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x324a9920
- (void)setFrame:(struct CGRect)fp8;	// IMP=0x324a9b98

@end

