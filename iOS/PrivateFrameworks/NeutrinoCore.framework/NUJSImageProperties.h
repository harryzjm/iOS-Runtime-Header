//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUJSImagePropertiesExport-Protocol.h>

@class NSDictionary, NSString, NUJSDepthProperties, NUJSRAWImageProperties;
@protocol NUImageProperties;

@interface NUJSImageProperties <NUJSImagePropertiesExport>
{
}

@property(readonly) NUJSRAWImageProperties *rawImageProperties;
@property(readonly) NUJSDepthProperties *depthProperties;
@property(readonly) NSString *fileUTI;
@property(readonly) NSDictionary *metadata;
@property(readonly) id <NUImageProperties> imageProperties;
- (id)initWithImageProperties:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

