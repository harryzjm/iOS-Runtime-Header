//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Pasteboard/NSProgressReporting-Protocol.h>

@class NSProgress, NSString, PBItem, PBItemCollection, PBItemRepresentation;

@interface PBDataTransferRequest : NSObject <NSProgressReporting>
{
    PBItemCollection *_itemCollection;
    PBItem *_item;
    PBItemRepresentation *_repr;
    NSProgress *_progress;
}

@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) PBItemRepresentation *repr; // @synthesize repr=_repr;
@property(retain, nonatomic) PBItem *item; // @synthesize item=_item;
@property(retain, nonatomic) PBItemCollection *itemCollection; // @synthesize itemCollection=_itemCollection;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *typeIdentifier; // @dynamic typeIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

