//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _WKFileUploadItem : NSObject
{
    struct RetainPtr<NSURL> _fileURL;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) RetainPtr_337fe565 displayImage;
- (void)setFileURL:(id)arg1;
- (id)fileURL;
@property(readonly, nonatomic, getter=isVideo) _Bool video;
- (id)initWithFileURL:(id)arg1;

@end

