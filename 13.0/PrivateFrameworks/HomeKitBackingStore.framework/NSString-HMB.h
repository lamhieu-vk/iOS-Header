//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <HomeKitBackingStore/HMBModelQueryableParameterCoder-Protocol.h>

@interface NSString (HMB) <HMBModelQueryableParameterCoder>
+ (id)hmbDecodeQueryableParameterFromData:(id)arg1;
+ (id)hmbStringWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;
- (id)hmbEncodeQueryableParameter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

