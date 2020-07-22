//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IMHandle, IMServiceImpl;

@interface IMServiceChatItem
{
    IMHandle *_handle;
    IMServiceImpl *_service;
}

@property(readonly, nonatomic) IMHandle *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) IMServiceImpl *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 service:(id)arg2 handle:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
