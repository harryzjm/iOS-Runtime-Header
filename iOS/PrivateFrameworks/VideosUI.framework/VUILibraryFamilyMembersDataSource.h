//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, VUIMediaAPIClient;

__attribute__((visibility("hidden")))
@interface VUILibraryFamilyMembersDataSource
{
    NSArray *_familyMembers;
    VUIMediaAPIClient *_mediaClient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUIMediaAPIClient *mediaClient; // @synthesize mediaClient=_mediaClient;
@property(retain, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
- (void)_orderFamilyMembersByFirstName;
- (void)startFetch;
- (id)init;

@end

