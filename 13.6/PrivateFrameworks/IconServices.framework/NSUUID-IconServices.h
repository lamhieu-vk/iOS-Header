//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUUID.h>

@interface NSUUID (IconServices)
+ (id)_IS_UUIDByXORingUUIDs:(id)arg1;
+ (id)_IS_UUIDWithBytes:(const char *)arg1 size:(unsigned long long)arg2;
+ (id)_IS_nullUUID;
+ (id)_IS_UUIDWithString:(id)arg1;
+ (id)_IS_UUIDWithData:(id)arg1;
- (void)_IS_getUUIDBytes:(char *)arg1 hash64:(unsigned long long *)arg2;
@end

