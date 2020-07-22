//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCSQRCodeParser, NSMapTable;
@protocol BCSAction;

@interface _SFQRCodeDetectionController : NSObject
{
    BCSQRCodeParser *_QRCodeParser;
    id <BCSAction> _lastDetectedAction;
    NSMapTable *_cachedElements;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (id)adjustedCopyActionForAction:(id)arg1 element:(id)arg2;
- (_Bool)_actionPickerItemSupportCopyAction:(id)arg1;
- (void)preparePickerItemsForActionIfNeeded:(id)arg1 element:(id)arg2 defaultAcitons:(id)arg3;
- (void)clearCachedElement:(id)arg1;
- (id)actionPickerItemsForAction:(id)arg1;
- (id)actionForElement:(id)arg1;
- (id)additionalWKElementActionFromElement:(id)arg1 defaultActions:(id)arg2;
- (id)elementForAction:(id)arg1;
- (id)getActionForImageSynchronously:(id)arg1 userInfo:(id *)arg2;
- (void)getActionForImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

