//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICPrivacyInfo : NSObject
{
}

+ (id)sharedPrivacyInfo;
- (_Bool)_privacyAcknowledgementRequiredForIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool privacyAcknowledgementRequiredForApplications;
@property(readonly, nonatomic) _Bool privacyAcknowledgementRequiredForBooks;
@property(readonly, nonatomic) _Bool privacyAcknowledgementRequiredForVideos;
@property(readonly, nonatomic) _Bool privacyAcknowledgementRequiredForMusic;
@property(readonly, nonatomic) _Bool privacyAcknowledgementRequiredForMedia;

@end
