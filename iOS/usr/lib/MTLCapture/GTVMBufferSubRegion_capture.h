//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MTLCapture/GTVMBufferSubRegion-Protocol.h>

@class GTVMBuffer_capture, NSString;

@interface GTVMBufferSubRegion_capture : NSObject <GTVMBufferSubRegion>
{
    GTVMBuffer_capture *_parent;
    struct _NSRange _range;
}

- (id)GTGPUToolsData;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (const void *)bytes;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithGTVMBuffer:(id)arg1 range:(struct _NSRange)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
