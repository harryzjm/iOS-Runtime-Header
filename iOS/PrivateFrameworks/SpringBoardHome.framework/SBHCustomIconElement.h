//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBLeafIconDataSource-Protocol.h>

@class NSString;

@interface SBHCustomIconElement : NSObject <SBLeafIconDataSource>
{
    _Bool _suggestion;
    NSString *_uniqueIdentifier;
    NSString *_containerBundleIdentifier;
}

+ (id)elementIdentifier;
- (void).cxx_destruct;
@property(nonatomic, getter=isSuggestion) _Bool suggestion; // @synthesize suggestion=_suggestion;
@property(readonly, copy, nonatomic) NSString *containerBundleIdentifier; // @synthesize containerBundleIdentifier=_containerBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (unsigned long long)priorityForIcon:(id)arg1;
- (id)copyWithUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)init;
- (id)initWithUniqueIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
