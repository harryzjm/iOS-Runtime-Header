//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PromotedContent/APPCSecureCodable-Protocol.h>
#import <PromotedContent/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@protocol APPCPromotableAppStoreSupplementalContext <APPCSecureCodable, NSCopying>
@property(nonatomic, readonly) NSString *storeFrontLocale;
@property(nonatomic, readonly) NSString *storeFront;
@property(nonatomic, readonly) NSDictionary *clickCap;
@property(nonatomic, readonly) NSDictionary *impressionCap;
@end
