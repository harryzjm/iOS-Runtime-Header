//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/NSObject-Protocol.h>

@class OADScene3D, OADShape3D;

@protocol OADProperties3DParent <NSObject>
- (_Bool)hasShape3D;
- (void)setShape3D:(OADShape3D *)arg1;
- (OADShape3D *)shape3D;
- (_Bool)hasScene3D;
- (void)setScene3D:(OADScene3D *)arg1;
- (OADScene3D *)scene3D;
@end

