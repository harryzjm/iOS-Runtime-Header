//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContact.h>

@class NSArray, NSString, NSURL;

@interface CNContact (TUSearchUtilities)
+ (id)keysToFetchForFaceTime;
@property(readonly, nonatomic) NSArray *emailAddressStrings;
@property(readonly, nonatomic) NSArray *phoneNumberStrings;
@property(readonly, nonatomic) NSURL *faceTimeQuicklookURL;
@property(readonly, nonatomic) NSString *anyDestinationID;
@end

