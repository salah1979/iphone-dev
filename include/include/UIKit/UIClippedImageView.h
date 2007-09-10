/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface UIClippedImageView : UIView
{
    UIImageView *m_imageView;
    struct CGRect m_originalFrame;
    struct CGRect m_baseFrame;
}

- (struct CGRect)baseFrame;	// IMP=0x324a16a4
- (void)dealloc;	// IMP=0x324a1590
- (id)image;	// IMP=0x324a15e8
- (id)initWithFrame:(struct CGRect)fp8 image:(id)fp24;	// IMP=0x324a1488
- (void)setBaseFrame:(struct CGRect)fp8;	// IMP=0x324a1688
- (void)setFrame:(struct CGRect)fp8;	// IMP=0x324a17c0
- (void)setImage:(id)fp8;	// IMP=0x324a1608
- (void)setImageOrigin:(struct CGPoint)fp8;	// IMP=0x324a16bc
- (void)setOpaque:(BOOL)fp8;	// IMP=0x324a1628
- (void)setOriginAdjustingImage:(struct CGPoint)fp8;	// IMP=0x324a16dc

@end

