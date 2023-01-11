//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFControlPanelItemRule-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HFControlPanelItemSingleControlRule : NSObject <HFControlPanelItemRule>
{
    CDUnknownBlockType _filter;
    CDUnknownBlockType _displayResultsGenerator;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType displayResultsGenerator; // @synthesize displayResultsGenerator=_displayResultsGenerator;
@property(readonly, copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)controlPanelItemForControlItems:(id)arg1;
- (id)initWithFilter:(CDUnknownBlockType)arg1 displayResultsGenerator:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

