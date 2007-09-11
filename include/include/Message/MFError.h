/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSError.h"

@class NSMutableDictionary;

@interface MFError : NSError
{
    NSMutableDictionary *_moreUserInfo;
}

+ (id)errorWithDomain:(id)fp8 code:(long)fp12 localizedDescription:(id)fp16;	// IMP=0x30b96375
+ (id)errorWithDomain:(id)fp8 code:(long)fp12 localizedDescription:(id)fp16 title:(id)fp20 userInfo:(id)fp24;	// IMP=0x30b96399
+ (id)errorWithException:(id)fp8;	// IMP=0x30b96479
- (void)dealloc;	// IMP=0x30b967b5
- (id)localizedDescription;	// IMP=0x30b965bd
- (id)moreInfo;	// IMP=0x30b96609
- (void)setLocalizedDescription:(id)fp8;	// IMP=0x30b96699
- (void)setMoreInfo:(id)fp8;	// IMP=0x30b966b9
- (void)setShortDescription:(id)fp8;	// IMP=0x30b966cd
- (void)setUserInfoObject:(id)fp8 forKey:(id)fp12;	// IMP=0x30b96521
- (id)shortDescription;	// IMP=0x30b96651
- (void)useGenericDescription:(id)fp8;	// IMP=0x30b966e1
- (id)userInfo;	// IMP=0x30b9652f

@end

