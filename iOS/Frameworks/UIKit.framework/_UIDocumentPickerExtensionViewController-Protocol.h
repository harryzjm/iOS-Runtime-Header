//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, UIColor, _UIDocumentPickerNSURLWrapper;

@protocol _UIDocumentPickerExtensionViewController <NSObject>
- (void)_setTintColor:(UIColor *)arg1;
- (void)_documentPickerDidDismiss;
- (void)_prepareWithExtensionInfo:(NSDictionary *)arg1 completionHandler:(void (^)(unsigned int))arg2;
- (void)_setUploadURLWrapper:(_UIDocumentPickerNSURLWrapper *)arg1;
- (void)_setPickerMode:(unsigned long long)arg1;
- (void)_setPickableTypes:(NSArray *)arg1;
@end

