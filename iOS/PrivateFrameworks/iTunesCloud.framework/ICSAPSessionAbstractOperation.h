//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ICAsyncOperation.h"

@class ICSAPSession;

__attribute__((visibility("hidden")))
@interface ICSAPSessionAbstractOperation : ICAsyncOperation
{
    ICSAPSession *_sapSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICSAPSession *sapSession; // @synthesize sapSession=_sapSession;
- (void)finishWithError:(id)arg1;
- (void)finishWithSAPContextPreparationError:(id)arg1;
- (void)executeWithSAPContext:(id)arg1;
- (void)execute;

@end

