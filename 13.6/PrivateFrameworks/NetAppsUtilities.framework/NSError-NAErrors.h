//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (NAErrors)
+ (id)na_genericError;
+ (id)na_cancelledError;
+ (id)na_timeoutError;
+ (id)na_errorWithCode:(unsigned long long)arg1;
- (_Bool)na_isCancelledError;
- (_Bool)na_isTimeoutError;
@end

