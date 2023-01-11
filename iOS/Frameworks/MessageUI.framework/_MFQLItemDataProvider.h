//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageUI/QLPreviewItemDataProvider-Protocol.h>

@class NSData, NSString, QLItem;

@interface _MFQLItemDataProvider : NSObject <QLPreviewItemDataProvider>
{
    NSData *_data;
    QLItem *_item;
}

@property(readonly, nonatomic) QLItem *item; // @synthesize item=_item;
- (void)dealloc;
- (id)provideDataForItem:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

