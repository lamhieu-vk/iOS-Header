//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SKPayment.h"

@class NSData, NSDictionary, NSString, SKPaymentDiscount;

@interface SKMutablePayment : SKPayment
{
}

@property(copy, nonatomic) NSDictionary *requestParameters; // @dynamic requestParameters;
@property(copy, nonatomic) NSString *partnerTransactionIdentifier; // @dynamic partnerTransactionIdentifier;
@property(copy, nonatomic) NSString *partnerIdentifier; // @dynamic partnerIdentifier;
@property(copy, nonatomic) SKPaymentDiscount *paymentDiscount;
@property(nonatomic) _Bool simulatesAskToBuyInSandbox; // @dynamic simulatesAskToBuyInSandbox;
@property(copy, nonatomic) NSData *requestData; // @dynamic requestData;
@property(nonatomic) long long quantity; // @dynamic quantity;
@property(copy, nonatomic) NSString *productIdentifier; // @dynamic productIdentifier;
@property(nonatomic) _Bool isStoreOriginated; // @dynamic isStoreOriginated;
@property(copy, nonatomic) NSString *applicationUsername; // @dynamic applicationUsername;

@end

