//
//  GitXTextFieldCell.h
//  GitX
//
//  Created by Nathan Kinsinger on 8/27/10.
//  Copyright 2010 Nathan Kinsinger. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PBRefContextDelegate.h"


@interface GitXTextFieldCell : NSTextFieldCell {
	__unsafe_unretained id<PBRefContextDelegate> contextMenuDelegate;
}

@property(nonatomic, unsafe_unretained) IBOutlet id<PBRefContextDelegate> contextMenuDelegate;

@end
