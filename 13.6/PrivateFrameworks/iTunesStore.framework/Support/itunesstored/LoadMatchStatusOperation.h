//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString;

@interface LoadMatchStatusOperation : ISOperation
{
    NSNumber *_accountID;
    unsigned long long _matchStatus;
    NSString *_userAgent;
}

- (id)_newMatchStatusOperationWithURLBag:(id)arg1;
- (void)run;
@property(copy) NSString *userAgent;
@property(readonly) unsigned long long matchStatus;
- (void)dealloc;
- (id)initWithAccountIdentifier:(id)arg1;

@end

