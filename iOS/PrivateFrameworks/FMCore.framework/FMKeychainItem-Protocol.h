//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FMCore/NSObject-Protocol.h>

@class NSData, NSDate, NSString;

@protocol FMKeychainItem <NSObject>
@property(readonly, nonatomic) NSData *rawData;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) NSDate *lastModifyDate;
@property(readonly, nonatomic) NSString *password;
@end

