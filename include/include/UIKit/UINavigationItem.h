/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/Foundation.h>

@class NSString, UINavigationItemView;

@interface UINavigationItem : NSObject
{
    NSString *_title;
    NSString *_backButtonTitle;
    int _tag;
    id _context;
    UINavigationItemView *_buttonView;
    UINavigationItemView *_titleView;
}

+ (struct __GSFont *)defaultFont;	// IMP=0x323d14a4
- (id)_automationID;	// IMP=0x323d1890
- (id)backButtonTitle;	// IMP=0x323d1784
- (id)context;	// IMP=0x323d1878
- (void)dealloc;	// IMP=0x323d1520
- (void)didBecomeTopInNavigationBar:(id)fp8 navigationBarState:(int)fp12;	// IMP=0x323d1888
- (void)didResignTopInNavigationBar:(id)fp8 navigationBarState:(int)fp12;	// IMP=0x323d188c
- (struct __GSFont *)font;	// IMP=0x323d17d4
- (id)initWithTitle:(id)fp8;	// IMP=0x323d14b8
- (void)setBackButtonTitle:(id)fp8;	// IMP=0x323d1690
- (void)setContext:(id)fp8;	// IMP=0x323d1830
- (void)setFont:(struct __GSFont *)fp8;	// IMP=0x323d1798
- (void)setTag:(int)fp8;	// IMP=0x323d1820
- (void)setTitle:(id)fp8;	// IMP=0x323d15a4
- (void)setWidth:(float)fp8;	// IMP=0x323d1794
- (int)tag;	// IMP=0x323d1828
- (id)title;	// IMP=0x323d177c
- (float)width;	// IMP=0x323d178c
- (void)willBecomeTopInNavigationBar:(id)fp8 navigationBarState:(int)fp12;	// IMP=0x323d1880
- (void)willResignTopInNavigationBar:(id)fp8 navigationBarState:(int)fp12;	// IMP=0x323d1884

@end

