//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/OCDDelayedNodeContext-Protocol.h>

@class EXReadState, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EXSheetContext : NSObject <OCDDelayedNodeContext>
{
    EXReadState *mSheetState;
    NSURL *mPackageLocation;
    NSString *mType;
}

- (_Bool)loadDelayedNode:(id)arg1;
- (void)dealloc;
- (id)initWithSheetLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

