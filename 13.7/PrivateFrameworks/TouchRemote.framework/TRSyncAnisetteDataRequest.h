//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRRequestMessage.h>

@class NSData;

@interface TRSyncAnisetteDataRequest : TRRequestMessage
{
    NSData *_simData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *simData; // @synthesize simData=_simData;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

