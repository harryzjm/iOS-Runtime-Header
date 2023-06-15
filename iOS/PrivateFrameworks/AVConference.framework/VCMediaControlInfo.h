//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaControlInfo : NSObject
{
    unsigned short _bitmap;
    unsigned long long _serializedSize;
    id _delegate;
    struct tagVCMediaControlInfoRealtimeDelegateProtocolVTable _delegateVTable;
    unsigned char _version;
    unsigned char _fecFeedbackVersion;
    struct tagVCMediaControlVTableC _vtableC;
    _Atomic unsigned int _controlInfoInUseCounter;
}

@property unsigned char version; // @synthesize version=_version;
@property unsigned char fecFeedbackVersion; // @synthesize fecFeedbackVersion=_fecFeedbackVersion;
@property(readonly) unsigned long long serializedSize; // @synthesize serializedSize=_serializedSize;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long *)arg3;
- (int)getInfoUnserialized:(CDStruct_d895cdc1 *)arg1 type:(unsigned int)arg2;
- (int)getInfo:(void *)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long *)arg3 type:(unsigned int)arg4;
- (_Bool)hasInfoType:(unsigned int)arg1;
- (int)setInfoUnserialized:(CDStruct_d895cdc1 *)arg1 type:(unsigned int)arg2;
- (int)setInfo:(void *)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;
- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_51b15958 *)arg3;
- (id)initWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(CDStruct_51b15958 *)arg3 version:(unsigned char)arg4;
- (id)init;

@end

