//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICLibraryAuthServiceClientTokenIdentifier, NSDate, NSString;

@interface ICLibraryAuthServiceClientTokenResult : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_token;
    long long _generatedAtMillis;
    long long _timeToLiveMillis;
    long long _lifespanMillis;
    ICLibraryAuthServiceClientTokenIdentifier *_tokenIdentitifer;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) ICLibraryAuthServiceClientTokenIdentifier *tokenIdentitifer; // @synthesize tokenIdentitifer=_tokenIdentitifer;
@property(readonly, nonatomic) long long lifespanMillis; // @synthesize lifespanMillis=_lifespanMillis;
@property(readonly, nonatomic) long long timeToLiveMillis; // @synthesize timeToLiveMillis=_timeToLiveMillis;
@property(readonly, nonatomic) long long generatedAtMillis; // @synthesize generatedAtMillis=_generatedAtMillis;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool isExpired;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
- (id)description;
- (id)initWithResponseDictionary:(id)arg1;

@end

