//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPStoreSocialRequestOperationDataSource-Protocol.h>

@class MPModelSocialPerson, NSString;

@interface MPStoreSocialFollowOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource>
{
    MPModelSocialPerson *_person;
}

@property(retain, nonatomic) MPModelSocialPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (id)queryItems;
- (long long)httpMethod;
- (long long)httpBodyType;
- (id)httpBody;
- (id)bagKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

