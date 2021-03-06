//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/JSExport-Protocol.h>

@class NSString;

@protocol SKUIJSTelephony <JSExport>
@property(readonly, nonatomic) NSString *providerName;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *operatorName;
@property(readonly, nonatomic) NSString *mobileNetworkCode;
@property(readonly, nonatomic) NSString *mobileCountryCode;
@property(readonly, nonatomic) NSString *countryCode;
@property(readonly, nonatomic, getter=isCellularRoaming) _Bool cellularRoaming;
- (void)sendSMSWithBodyText:(NSString *)arg1:(NSString *)arg2:(NSString *)arg3;
- (NSString *)formattedPhoneNumber:(NSString *)arg1;
- (void)beginObserving;
@end

