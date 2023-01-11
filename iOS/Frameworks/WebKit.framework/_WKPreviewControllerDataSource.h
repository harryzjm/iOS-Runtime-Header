//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/QLPreviewControllerDataSource-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _WKPreviewControllerDataSource : NSObject <QLPreviewControllerDataSource>
{
    struct RetainPtr<NSItemProvider> _itemProvider;
    struct RetainPtr<QLItem> _item;
    CDUnknownBlockType _completionHandler;
    NSString *_mimeType;
}

@property(copy) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)failWithError:(id)arg1;
- (void)finish:(struct URL)arg1;
- (void)setProgress:(float)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)dealloc;
- (id)initWithMIMEType:(id)arg1;

@end
