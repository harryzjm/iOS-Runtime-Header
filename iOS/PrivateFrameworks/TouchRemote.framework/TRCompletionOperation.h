//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TRCompletionOperation
{
    _Bool _success;
    long long _errorCode;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)execute;

@end
