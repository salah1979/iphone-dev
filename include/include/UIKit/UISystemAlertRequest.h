/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class UIAlertSheet;

@interface UISystemAlertRequest : NSObject
{
    int _alertID;
    UIAlertSheet *_sheet;
    id _target;
    SEL _action;
}

- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;	// IMP=0x324aeaac
- (void)dealloc;	// IMP=0x324aea44
- (id)initWithAlertID:(int)fp8 sheet:(id)fp12 target:(id)fp16 action:(SEL)fp20;	// IMP=0x324ae988

@end

