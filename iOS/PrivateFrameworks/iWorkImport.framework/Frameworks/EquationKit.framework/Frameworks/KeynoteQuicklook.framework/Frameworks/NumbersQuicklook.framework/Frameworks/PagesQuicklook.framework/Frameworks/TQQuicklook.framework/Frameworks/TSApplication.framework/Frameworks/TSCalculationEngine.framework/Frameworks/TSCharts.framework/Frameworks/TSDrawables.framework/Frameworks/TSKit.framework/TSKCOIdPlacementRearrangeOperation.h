//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSKCOIdPlacementRearrangeOperation
{
}

- (void)saveToArchiver:(id)arg1 message:(struct Operation *)arg2;
- (shared_ptr_f167ad79)newTransformableOperation;
- (int)placementType;
- (id)initWithAddress:(const vector_4dc5f307 *)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(_Bool)arg4 noop:(_Bool)arg5;

@end
