//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSData, NSString;

@protocol CRKContact <NSObject>
@property(readonly, copy, nonatomic) NSData *thumbnailImageData;
@property(readonly, copy, nonatomic) NSString *phoneticGivenName;
@property(readonly, copy, nonatomic) NSString *phoneticFamilyName;
@property(readonly, copy, nonatomic) NSString *givenName;
@property(readonly, copy, nonatomic) NSString *familyName;
@property(readonly, copy, nonatomic) NSString *nickname;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

