//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface TPSPairedWatchValidation
{
    NSUUID *_capability;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSUUID *capability; // @synthesize capability=_capability;
- (void)validateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCapability:(id)arg1;

@end
