//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperationQueue, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface SUUIProfileSettingDescription
{
    NSString *_handle;
    NSString *_name;
    NSOperationQueue *_operationQueue;
    UIImage *_photo;
}

+ (Class)_viewClassForSettingDescription:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (void)_fetchProfilePhoto;
- (void)_fetchAccountInfo;
- (void)reloadData;
- (void)dealloc;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;

@end

