//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface NUImageDataRequest
{
    NSString *_dataExtractor;
    NSDictionary *_options;
}

@property(readonly) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSString *dataExtractor; // @synthesize dataExtractor=_dataExtractor;
- (void).cxx_destruct;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)newRenderJob;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3;
- (id)initWithComposition:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3;
- (id)initWithComposition:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

