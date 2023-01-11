//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCSQRCodeParser, NSMutableSet;
@protocol BCSAction;

@interface _SFQRCodeDetectionController : NSObject
{
    BCSQRCodeParser *_QRCodeParser;
    id <BCSAction> _lastDetectedAction;
    NSMutableSet *_cachedElements;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (id)adjustedCopyActionForAction:(id)arg1 elementInfo:(id)arg2;
- (void)clearCachedElement:(id)arg1;
- (void)cacheElement:(id)arg1;
- (id)actionForElement:(id)arg1;
- (id)menuElementsForElementInfo:(id)arg1;
- (id)elementForAction:(id)arg1;
- (id)getActionForImageSynchronously:(id)arg1 userInfo:(id *)arg2;
- (void)getActionForImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
