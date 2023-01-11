//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/PSSpecifierGroup-Protocol.h>

@class NSString, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUILowDataModeSubgroup : NSObject <PSSpecifierGroup>
{
    PSListController *_hostController;
    PSSpecifier *_parentSpecifier;
}

@property(nonatomic) __weak PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
- (void).cxx_destruct;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)specifiers;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
