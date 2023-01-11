//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CKDOperationInfoDelegate;

__attribute__((visibility("hidden")))
@interface CKDOperationInfoDelegateWrapper : NSObject
{
    id <CKDOperationInfoDelegate> _delegate;
    NSString *_personaID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(nonatomic) __weak id <CKDOperationInfoDelegate> delegate; // @synthesize delegate=_delegate;
- (void)performWithDelegate:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1;

@end
