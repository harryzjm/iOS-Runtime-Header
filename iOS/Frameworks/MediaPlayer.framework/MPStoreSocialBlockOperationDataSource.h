//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPModelSocialPerson, NSString;

__attribute__((visibility("hidden")))
@interface MPStoreSocialBlockOperationDataSource : NSObject
{
    MPModelSocialPerson *_person;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPModelSocialPerson *person; // @synthesize person=_person;
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

