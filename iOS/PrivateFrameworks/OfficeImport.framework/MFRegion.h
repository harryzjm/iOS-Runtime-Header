//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/MFObject-Protocol.h>

__attribute__((visibility("hidden")))
@interface MFRegion : NSObject <MFObject>
{
}

- (int)invert:(id)arg1;
- (int)frame:(id)arg1 in_brush:(id)arg2;
- (int)fill:(id)arg1 in_brush:(id)arg2;
- (id)pathForClippingWithDeviceContext:(id)arg1;
- (int)selectInto:(id)arg1;

@end

