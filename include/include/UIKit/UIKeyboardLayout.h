/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSMutableDictionary, UIKeyboardSublayout;

@interface UIKeyboardLayout : UIView
{
    NSMutableDictionary *m_keyedSublayouts;
    UIKeyboardSublayout *m_activeSublayout;
    UIKeyboardSublayout *m_deactivatingSublayout;
    id m_activeSublayoutKey;
    int m_activeKeyIndex;
    int m_activeGroupKeyIndex;
    UIView *m_activeKeyView;
    UIView *m_activeGroupKeyView;
    UIView *m_activeGroupCharacterView;
    int m_returnKeyIndex;
    UIView *m_enabledReturnKeyView;
    UIView *m_disabledReturnKeyView;
    UIView *m_pressedReturnKeyView;
    struct CGPoint m_dragPoint;
    int m_activation;
    BOOL m_shift;
    BOOL m_built;
    BOOL m_dragged;
    BOOL m_usesGroupKeys;
    BOOL m_mouseDownInMoreKey;
}

- (void)activateCompositeKey:(CDAnonymousStruct5 *)fp8;	// IMP=0x324a8d78
- (BOOL)activateCompositeReturnKey:(CDAnonymousStruct5 *)fp8;	// IMP=0x324a614c
- (void)activateFirstKeyOfType:(unsigned int)fp8;	// IMP=0x324a6430
- (void)activateGroupCharacterKeys:(CDAnonymousStruct5 *)fp8;	// IMP=0x324a6b4c
- (void)activateGroupKey:(CDAnonymousStruct5 *)fp8;	// IMP=0x324a64d0
- (void)activateGroupKeyWithIndex:(unsigned int)fp8;	// IMP=0x324a65d0
- (void)activateKey:(CDAnonymousStruct5 *)fp8;	// IMP=0x324a623c
- (void)activateKeyWithIndex:(unsigned int)fp8;	// IMP=0x324a63c0
- (CDAnonymousStruct5 *)activeGroupKey;	// IMP=0x324a5d0c
- (CDAnonymousStruct5 *)activeKey;	// IMP=0x324a5d58
- (id)activeKeyContextData;	// IMP=0x324a94cc
- (unsigned int)activeKeyMouseDownFlags;	// IMP=0x324a955c
- (unsigned int)activeKeyMouseUpFlags;	// IMP=0x324a952c
- (unsigned int)activeKeyType;	// IMP=0x324a94fc
- (id)activeSublayoutKey;	// IMP=0x324a5d04
- (void)addSublayout:(id)fp8 forKey:(id)fp12;	// IMP=0x324a5b14
- (id)alternateSublayoutKey:(id)fp8;	// IMP=0x324a6b50
- (void)build;	// IMP=0x324a5510
- (id)buildSublayoutForKey:(id)fp8;	// IMP=0x324a5514
- (id)buildUIKeyboardLayoutAlphabet;	// IMP=0x324a597c
- (id)buildUIKeyboardLayoutAlphabetTransparent;	// IMP=0x324a598c
- (id)buildUIKeyboardLayoutAlternate;	// IMP=0x324a5960
- (id)buildUIKeyboardLayoutEmailAddressing;	// IMP=0x324a5aa4
- (id)buildUIKeyboardLayoutEmailAddressingAlt;	// IMP=0x324a5ac0
- (id)buildUIKeyboardLayoutMain;	// IMP=0x324a5944
- (id)buildUIKeyboardLayoutNumberPad;	// IMP=0x324a59fc
- (id)buildUIKeyboardLayoutNumberPadTransparent;	// IMP=0x324a5a18
- (id)buildUIKeyboardLayoutNumbers;	// IMP=0x324a5984
- (id)buildUIKeyboardLayoutNumbersTransparent;	// IMP=0x324a59a8
- (id)buildUIKeyboardLayoutPhonePad;	// IMP=0x324a59c4
- (id)buildUIKeyboardLayoutPhonePadAlt;	// IMP=0x324a59e0
- (id)buildUIKeyboardLayoutSMSAddressing;	// IMP=0x324a5a6c
- (id)buildUIKeyboardLayoutSMSAddressingAlt;	// IMP=0x324a5a88
- (id)buildUIKeyboardLayoutSingleEmailAddress;	// IMP=0x324a5adc
- (id)buildUIKeyboardLayoutSingleEmailAddressAlt;	// IMP=0x324a5af8
- (id)buildUIKeyboardLayoutURL;	// IMP=0x324a5a34
- (id)buildUIKeyboardLayoutURLAlt;	// IMP=0x324a5a50
- (void)clearReturnKeyViews;	// IMP=0x324a5d80
- (void)clearTimers;	// IMP=0x324a6980
- (id)closestMatchingSublayout:(id)fp8;	// IMP=0x324a7980
- (void)deactivateActiveGroupKey;	// IMP=0x324a6640
- (void)deactivateActiveKey;	// IMP=0x324a8cbc
- (void)dealloc;	// IMP=0x324a54a8
- (BOOL)hasCompositeReturnKeys;	// IMP=0x324a5fa8
- (void)initSyntheticKeyCache:(struct __CFDictionary *)fp8 key:(id)fp12 shift:(BOOL)fp16;	// IMP=0x324a7b88
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x324a53e0
- (id)inputStringForKey:(CDAnonymousStruct5 *)fp8;	// IMP=0x324a6a60
- (BOOL)isLongPressedKey:(CDAnonymousStruct5 *)fp8;	// IMP=0x324a6984
- (CDAnonymousStruct5 *)keyForPoint:(struct CGPoint)fp8;	// IMP=0x324a6690
- (unsigned int)keyHitTest:(struct CGPoint)fp8;	// IMP=0x324a8a48
- (void)longPressAction;	// IMP=0x324a69e0
- (void)mouseDown:(struct __GSEvent *)fp8;	// IMP=0x324a6d24
- (void)mouseDragged:(struct __GSEvent *)fp8;	// IMP=0x324a7230
- (void)mouseUp:(struct __GSEvent *)fp8;	// IMP=0x324a74f0
- (id)plistWithChildren:(struct CGPoint)fp8;	// IMP=0x324a7d98
- (void)registerReturnKeyViewsForSublayout:(id)fp8;	// IMP=0x324a6238
- (id)returnKeyViewForIndex:(unsigned int)fp8 viewArray:(id)fp12;	// IMP=0x324a5dd0
- (void)sendSyntheticEvent:(int)fp8 point:(struct CGPoint)fp12;	// IMP=0x324a7bf0
- (void)setShift:(BOOL)fp8;	// IMP=0x324a66d0
- (void)showSublayoutForKey:(id)fp8;	// IMP=0x324a5b60
- (id)sublayoutForKey:(id)fp8;	// IMP=0x324a5ce4
- (void)synthesizeInputForString:(id)fp8 pause:(double)fp12 dx:(int)fp20 dy:(int)fp24;	// IMP=0x324a83b0
- (void)synthesizeInputForString:(id)fp8 repeats:(int)fp12 pause:(double)fp16 dx:(int)fp24 dy:(int)fp28;	// IMP=0x324a7cf8
- (void)updateCompositeReturnKey;	// IMP=0x324a5fec
- (void)updateReturnKeyViews;	// IMP=0x324a5e78
- (BOOL)usesAutoShift;	// IMP=0x324a5d34

@end

