// block.h

// ��Ʈ������ 7�� ������ ǥ���� 3���� �迭

int block[28][4][4] = {
	// ���� #1 : 0 ~ 3
	{
		{ 0, 0, 0, 0 }, //
		{ 1, 0, 0, 0 }, // �� 
		{ 1, 1, 1, 0 }, // �̢̢�
		{ 0, 0, 0, 0 }  //
	},
	{
		{ 0, 0, 1, 0 }, //    ��
		{ 0, 0, 1, 0 }, //    ��
		{ 0, 1, 1, 0 }, //  �̢�
		{ 0, 0, 0, 0 }  //
	},
	{
		{ 1, 1, 1, 0 },
		{ 0, 0, 1, 0 },
		{ 0, 0, 0, 0 },
		{ 0, 0, 0, 0 }
	},
	{
		{ 1, 1, 0, 0 },
		{ 1, 0, 0, 0 },
		{ 1, 0, 0, 0 },
		{ 0, 0, 0, 0 }
	},
	// ���� #2 : 4 ~ 7
	{
		{ 0, 0, 0, 0 },
		{ 0, 0, 1, 0 },	//     ��
		{ 1, 1, 1, 0 }, // �̢̢�
		{ 0, 0, 0, 0 }
	},
	{
		{ 0, 1, 1, 0 },
		{ 0, 0, 1, 0 },
		{ 0, 0, 1, 0 },
		{ 0, 0, 0, 0 }
	},
	{
		{ 1, 1, 1, 0 },
		{ 1, 0, 0, 0 },
		{ 0, 0, 0, 0 },
		{ 0, 0, 0, 0 }
	},
	{
		{ 1, 0, 0, 0 },
		{ 1, 0, 0, 0 },
		{ 1, 1, 0, 0 },
		{ 0, 0, 0, 0 }
	},
	// ���� #3 : 8 ~ 11
	{
		{ 0, 0, 0, 0 }, //
		{ 0, 1, 0, 0 }, //   ��
		{ 1, 1, 1, 0 }, // �̢̢�
		{ 0, 0, 0, 0 }  //
	},
	{
		{ 0, 0, 0, 0 },
		{ 0, 1, 0, 0 },
		{ 1, 1, 0, 0 },
		{ 0, 1, 0, 0 }
	},
	{
		{ 0, 0, 0, 0 },
		{ 0, 0, 0, 0 },
		{ 1, 1, 1, 0 },
		{ 0, 1, 0, 0 }
	},
	{
		{ 0, 0, 0, 0 },
		{ 0, 1, 0, 0 },
		{ 0, 1, 1, 0 },
		{ 0, 1, 0, 0 }
	},
	// ���� #4 : 12 ~ 15
	{
		{ 0, 1, 0, 0 },	// ��
		{ 0, 1, 0, 0 }, // ��
		{ 0, 1, 0, 0 }, // ��
		{ 0, 1, 0, 0 }  // ��
	},
	{
		{ 0, 0, 0, 0 },
		{ 0, 0, 0, 0 },
		{ 1, 1, 1, 1 },
		{ 0, 0, 0, 0 }
	},
	{
		{ 0, 1, 0, 0 },
		{ 0, 1, 0, 0 },
		{ 0, 1, 0, 0 },
		{ 0, 1, 0, 0 }
	},
	{
		{ 0, 0, 0, 0 },
		{ 0, 0, 0, 0 },
		{ 1, 1, 1, 1 },
		{ 0, 0, 0, 0 }
	},
	// ���� #5 : 16 ~ 19
	{
		{ 1, 1, 0, 0 }, // �̢�
		{ 1, 1, 0, 0 }, // �̢�
		{ 0, 0, 0, 0 },
		{ 0, 0, 0, 0 }
	},
	{
		{ 1, 1, 0, 0 },
		{ 1, 1, 0, 0 },
		{ 0, 0, 0, 0 },
		{ 0, 0, 0, 0 }
	},
	{
		{ 1, 1, 0, 0 },
		{ 1, 1, 0, 0 },
		{ 0, 0, 0, 0 },
		{ 0, 0, 0, 0 }
	},
	{
		{ 1, 1, 0, 0 },
		{ 1, 1, 0, 0 },
		{ 0, 0, 0, 0 },
		{ 0, 0, 0, 0 }
	},
	// ���� #5 : 20 ~ 23
	{
		{ 0, 0, 0, 0 },
		{ 0, 1, 1, 0 }, //   �̢�
		{ 1, 1, 0, 0 }, // �̢�
		{ 0, 0, 0, 0 }
	},
	{
		{ 0, 1, 0, 0 },
		{ 0, 1, 1, 0 },
		{ 0, 0, 1, 0 },
		{ 0, 0, 0, 0 }
	},
	{
		{ 0, 0, 0, 0 },
		{ 0, 1, 1, 0 },
		{ 1, 1, 0, 0 },
		{ 0, 0, 0, 0 }
	},
	{
		{ 0, 1, 0, 0 },
		{ 0, 1, 1, 0 },
		{ 0, 0, 1, 0 },
		{ 0, 0, 0, 0 }
	},
	// ���� #6 : 24 ~ 27
	{
		{ 0, 0, 0, 0 },
		{ 1, 1, 0, 0 }, // �̢�
		{ 0, 1, 1, 0 }, //   �̢�
		{ 0, 0, 0, 0 }
	},
	{
		{ 0, 0, 1, 0 },
		{ 0, 1, 1, 0 },
		{ 0, 1, 0, 0 },
		{ 0, 0, 0, 0 }
	},
	{
		{ 0, 0, 0, 0 },
		{ 1, 1, 0, 0 },
		{ 0, 1, 1, 0 },
		{ 0, 0, 0, 0 }
	},
	{
		{ 0, 0, 1, 0 },
		{ 0, 1, 1, 0 },
		{ 0, 1, 0, 0 },
		{ 0, 0, 0, 0 }
	},
};