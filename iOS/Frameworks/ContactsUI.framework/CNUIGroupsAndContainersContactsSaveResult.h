//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError;

__attribute__((visibility("hidden")))
@interface CNUIGroupsAndContainersContactsSaveResult : NSObject
{
    _Bool _saveDidSucceed;
    NSError *_error;
    NSArray *_addedContacts;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *addedContacts; // @synthesize addedContacts=_addedContacts;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool saveDidSucceed; // @synthesize saveDidSucceed=_saveDidSucceed;
- (id)initWithSuccess:(_Bool)arg1 error:(id)arg2 addedContacts:(id)arg3;

@end

