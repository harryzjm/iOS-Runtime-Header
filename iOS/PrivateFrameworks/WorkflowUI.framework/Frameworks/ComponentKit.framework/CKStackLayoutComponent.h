//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CKStackLayoutComponent
{
    struct CKStackLayoutComponentStyle _style;
    vector_9f8546e7 _children;
}

+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2;
+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2 style:(const struct CKStackLayoutComponentStyle *)arg3 children:(const vector_9f8546e7 *)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end
