/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@interface CAFilter : NSObject <NSCopying, NSCoding> {}

+ (id)filterWithName:(NSString *)name;
- (BOOL)enabled;
- (id)initWithName:(NSString *)name;
- (NSString *)name;
- (void)setEnabled:(BOOL)enabled;
- (void)setName:(NSString *)name;
- (id)type;

@end
